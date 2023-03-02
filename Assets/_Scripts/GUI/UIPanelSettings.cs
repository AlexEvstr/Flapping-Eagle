using evstr.GameConfig;
using UnityEngine;
using Zenject;

namespace evstr.GUI
{
    public class UIPanelSettings : MonoBehaviour
    {
        [SerializeField] private UIEasyLevelButton _easyLevelButton;
        [SerializeField] private UIMediumLevelButton _mediumLevelButton;
        [SerializeField] private UIHardLevelButton _hardLevelButton;

        private IGameData _gameData;

        [Inject]
        private void Construct(IGameData gameData)
        {
            _gameData = gameData;
        }

        private void OnEnable()
        {
            ChangeActiveButton(_gameData.GameDifficulty);
        }

        public void ChangeActiveButton(GameDifficulty gameDifficulty)
        {
            switch(gameDifficulty)
            {
                case GameDifficulty.EASY:
                    _easyLevelButton.Active();
                    _mediumLevelButton.DisActive();
                    _hardLevelButton.DisActive();
                    _gameData.GameDifficulty = GameDifficulty.EASY;
                    break;

                case GameDifficulty.NORMAL:
                    _easyLevelButton.DisActive();
                    _mediumLevelButton.Active();
                    _hardLevelButton.DisActive();
                    _gameData.GameDifficulty = GameDifficulty.NORMAL;
                    break;

                case GameDifficulty.HARD:
                    _easyLevelButton.DisActive();
                    _mediumLevelButton.DisActive();
                    _hardLevelButton.Active();
                    _gameData.GameDifficulty = GameDifficulty.HARD;
                    break;
            }
        }
    }
}
