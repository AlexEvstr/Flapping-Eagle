using evstr.GameConfig;
using evstr.Generals;
using evstr.GUI;
using evstr.States;
using System;
using UnityEngine;
using Zenject;

namespace evstr.Zenject
{
    public class GameInstaller : MonoInstaller, IUpdateLoop
    {
        public event Action OnUpdate;

        public GUIService _guiService;
        public ObstacleSpawner _obstacleSpawner;
        public ResourceController _resourceController;

        private GameController _gameController;

        public override void InstallBindings()
        {
            GameData gameData = SaveLoadData.Load();
            gameData.TransferDependency(_guiService);
            Container.BindInstance<IGameData>(gameData);

            Container.BindInstance(_guiService);
            Container.BindInstance(_obstacleSpawner);
            Container.BindInstance(_resourceController);
            Container.BindInstance<IUpdateLoop>(this);
            Container.Bind<IInputSystem>().To<InputSystemAndroid>().AsSingle();

            _gameController = new GameController(gameData);
            Container.BindInstance(_gameController);

            Debug.Log(gameData.GameDifficulty);

            Container.Bind<StateMachine>().AsSingle();
        }

        public void Update()
        {
            OnUpdate?.Invoke();
        }

        private void OnApplicationQuit()
        {
            _gameController.SaveGame();
        }
    }
}