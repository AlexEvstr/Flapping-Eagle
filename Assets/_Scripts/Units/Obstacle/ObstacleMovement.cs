using evstr.GameConfig;
using evstr.Generals;
using evstr.GUI;
using evstr.ObjectDetector;
using evstr.States;
using evstr.Audio;
using UnityEngine;
using Zenject;

namespace evstr.Obstacle
{
    public class ObstacleMovement : MonoBehaviour
    {
        [SerializeField] private ObstacleDetecter _obstacleDetecterOne;
        [SerializeField] private ObstacleDetecter _obstacleDetecterTwo;
        [SerializeField] private ScoreZoneDetector _scoreZoneDetector;

        [SerializeField] private float _obstacleSpeed;

        private IUpdateLoop _updater;

        public void Construct(IUpdateLoop update, StateMachine stateMachine, IGameData gameData, AudioService audioService)
        {
            _updater = update;

            _obstacleDetecterOne.Construct(stateMachine, audioService);
            _obstacleDetecterTwo.Construct(stateMachine, audioService);
            _scoreZoneDetector.Construct(gameData);
            _updater.OnUpdate += Movement;
        }

        private void OnDestroy()
        {
            _updater.OnUpdate -= Movement;
        }

        private void Movement()
        {
            transform.Translate(-_obstacleSpeed * Time.deltaTime, 0, 0);
        }
    }
}