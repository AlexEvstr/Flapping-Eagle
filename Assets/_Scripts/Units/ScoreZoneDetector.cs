using evstr.GameConfig;
using evstr.GUI;
using UnityEngine;
using Zenject;

namespace evstr.ObjectDetector
{
    public class ScoreZoneDetector : MonoBehaviour, IDetector
    {
        private IGameData _gameData;

        public void Construct(IGameData gameData)
        {
            _gameData = gameData;
            _gameData.IncreaseHighScore();
        }

        public void OnCollision()
        {
            _gameData.IncreaseScore();
            _gameData.IncreaseHighScore();
        }
    }
}
