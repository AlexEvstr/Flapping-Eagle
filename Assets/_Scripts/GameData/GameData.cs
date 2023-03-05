using evstr.GUI;
using System;

namespace evstr.GameConfig
{
    public enum GameDifficulty { EASY = 0, NORMAL = 1, HARD = 2}

    [Serializable]
    public class GameData : IGameData
    {
        [NonSerialized] private int _score;
        private int _highScore;
        private bool _audioStatus;
        private GameDifficulty _gameDifficulty = GameDifficulty.EASY;

        public int GetScore
        {
            get => _score;
        }

        public int GetHighScore
        {
            get => _highScore;
        }

        public bool AudioStatus 
        {
            get => _audioStatus; 
            set => _audioStatus = value; 
        }

        public GameDifficulty GameDifficulty 
        {
            get => _gameDifficulty;
            set => _gameDifficulty = value;
        }

        [NonSerialized] private GUIService _guiService;
 
        public void TransferDependency(GUIService guiService)
        {
            _guiService = guiService;
        }

        public void IncreaseScore()
        {
            _score += 1;
            _guiService.UpdateTextScore(_score);
        }

        public void IncreaseHighScore()
        {
            if(_highScore < _score)
            {
                _highScore = _score;
            }
            _guiService.UpdateTextHighScore(_highScore);
        }

    }
}
