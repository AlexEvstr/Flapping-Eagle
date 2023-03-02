using evstr.GUI;
using evstr.Zenject;

namespace evstr.States
{
    public enum StateGame { BOOTSTRAP_GAME, START_GAME, STOP_GAME, RESTART_GAME }

    public class StateMachine
    {
        private StartGameState _startGameState;
        private StopGameState _stopGameState;
        private RestartStateGame _restartState;
        private IState _currentState;

        public StateMachine(ObstacleSpawner obstacleSpawner, GUIService guiService, GameController gameController)
        {
            _startGameState = new StartGameState(obstacleSpawner, guiService);
            _stopGameState = new StopGameState(obstacleSpawner, guiService);
            _restartState = new RestartStateGame(gameController);
        }

        public void EntryState(StateGame stateGame)
        {
            _currentState?.Exit();
            switch(stateGame)
            { 
                case StateGame.START_GAME:
                    _currentState = _startGameState;
                    break;
                case StateGame.STOP_GAME:
                    _currentState = _stopGameState;
                    break;
                case StateGame.RESTART_GAME:
                    _currentState = _restartState;
                    break;
            }
            _currentState.Enter();
        }
    }
}