using evstr.GUI;
using System;

namespace evstr.GameConfig
{
    public enum GameDifficulty { EASY = 0, NORMAL = 1, HARD = 2}

    [Serializable]
    public class GameData : IGameData
    {
        private int _score;
        private bool _audioStatus;
        private GameDifficulty _gameDifficulty = GameDifficulty.EASY;

        public int GetScore
        {
            get => _score;
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

        [NonSerialized]
        private GUIService _guiService;
 
        public void TransferDependency(GUIService guiService)
        {
            _guiService = guiService;
        }

        public void IncreaseScore()
        {
            _score += 1;
            _guiService.UpdateTextScore(_score);
        }

    }
}
