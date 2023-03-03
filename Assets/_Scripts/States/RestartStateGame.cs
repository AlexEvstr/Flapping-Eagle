using evstr.GUI;
using evstr.States;
using evstr.Zenject;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace evstr
{
    public class RestartStateGame : IState
    {
        private GameController _gameController;

        public RestartStateGame(GameController gameController)
        {
            _gameController = gameController;
        }

        public void Enter()
        {
            _gameController.SaveGame();
            SceneManager.LoadScene(0);
        }

        public void Exit()
        {
        }

    }
}
