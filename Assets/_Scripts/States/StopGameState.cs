using evstr.GUI;
using UnityEngine;
using Zenject;

namespace evstr.States
{
    public class StopGameState : IState
    {
        private ObstacleSpawner _obstacleSpawner;
        private GUIService _guiService;

        public StopGameState(ObstacleSpawner obstacleSpawner, GUIService guiService)
        {
            _obstacleSpawner = obstacleSpawner;
            _guiService = guiService;
        }

        public void Enter()
        {
            Time.timeScale = 0;
            _guiService.SetVisibilityPanelGameOver(true);
        }

        public void Exit()
        {
            
        }
    }
}