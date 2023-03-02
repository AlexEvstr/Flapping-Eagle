using evstr.States;
using UnityEngine;

namespace evstr.ObjectDetector
{
    public class ObstacleDetecter : MonoBehaviour, IDetector
    {
        private StateMachine _stateMachine;

        public void Construct(StateMachine stateMachine)
        {
            _stateMachine = stateMachine;
        }

        public void OnCollision()
        {
            _stateMachine.EntryState(StateGame.STOP_GAME);
        }
    }
}
