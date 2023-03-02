using evstr.GUI;
using UnityEngine;

namespace evstr.States
{
    public class StartGameState : IState
    {
        private ObstacleSpawner _obstacleSpawner;
        private GUIService _guiService;

        public StartGameState(ObstacleSpawner obstacleSpawner, GUIService guiService)
        {
            _obstacleSpawner = obstacleSpawner;
            _guiService = guiService;
        }

        public void Enter()
        {
            Time.timeScale = 1;
            _obstacleSpawner.StartSpawn();
            _guiService.SetVisibilityPanelMainMenu(false);
        }

        public void Exit()
        {
        }
    }
}