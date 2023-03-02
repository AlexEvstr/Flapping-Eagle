using evstr.GameConfig;

namespace evstr.Zenject
{
    public class GameController
    {
        private GameData _gameData;

        public GameController(GameData gameData)
        {
            _gameData = gameData;
        }

        public void SaveGame()
        {
            SaveLoadData.Save(_gameData);
        }
    }
}