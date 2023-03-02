using evstr.States;
using evstr.Zenject;
using UnityEngine;
using Zenject;

namespace evstr.GUI
{
    public class UIStartButton : UIBaseButton
    {
        private StateMachine _gameController;

        [Inject]
        private void Construct(StateMachine gameController)
        {
            _gameController = gameController;
        }

        public override void OnClick()
        {
            _gameController.EntryState(StateGame.START_GAME);
        }
    }
}
