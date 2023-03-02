using evstr.GameConfig;
using UnityEngine;
using Zenject;

namespace evstr.Generals
{
    public class ResourceController : MonoBehaviour
    {
        [SerializeField] private GameObject _easyObstaclePrefab;
        [SerializeField] private GameObject _mediumObstaclePrefab;
        [SerializeField] private GameObject _hardObstaclePrefab;

        private IGameData _gameData;
        
        [Inject]
        private void Counstruct(IGameData gameData)
        {
            _gameData = gameData;
        }

        public GameObject GetObstaclePrefab()
        {
            switch(_gameData.GameDifficulty)
            {
                case GameDifficulty.EASY:
                    return _easyObstaclePrefab;
                case GameDifficulty.NORMAL:
                    return _mediumObstaclePrefab;
                case GameDifficulty.HARD:
                    return _hardObstaclePrefab;
                default:
                    return _hardObstaclePrefab;
            }
        }
    }
}
