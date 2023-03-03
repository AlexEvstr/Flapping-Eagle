using evstr.States;
using evstr.Audio;
using UnityEngine;

namespace evstr.ObjectDetector
{
    public class ObstacleDetecter : MonoBehaviour, IDetector
    {
        private StateMachine _stateMachine;
        private AudioService _audioService;

        public void Construct(StateMachine stateMachine, AudioService audioService)
        {
            _stateMachine = stateMachine;
            _audioService = audioService;
        }

        public void OnCollision()
        {
            _stateMachine.EntryState(StateGame.STOP_GAME);
            _audioService.PlayCollisionSound();
        }
    }
}
