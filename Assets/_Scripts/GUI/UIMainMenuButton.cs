using evstr.States;
using UnityEngine.SceneManagement;
using Zenject;

namespace evstr.GUI
{
    public class UIMainMenuButton : UIBaseButton
    {
        private StateMachine _stateMachine;

        [Inject]
        private void Construct(StateMachine gameController)
        {
            _stateMachine = gameController;
        }

        public override void OnClick()
        {
            _stateMachine.EntryState(StateGame.RESTART_GAME);
        }
    }
}
