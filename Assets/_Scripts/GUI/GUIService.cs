using Unity.VisualScripting.Dependencies.NCalc;
using UnityEngine;
using UnityEngine.SocialPlatforms.Impl;
using UnityEngine.UI;

namespace evstr.GUI
{
    public class GUIService : MonoBehaviour
    {
        [SerializeField] private GameObject _panelGameOver;
        [SerializeField] private GameObject _panelMainMenu;
        [SerializeField] private Text _textScore;
        [SerializeField] private Text _textHighscore;

        private void OnEnable()
        {
            _textScore.text = "0";
        }

        public void SetVisibilityPanelGameOver(bool value)
        {
            _panelGameOver.SetActive(value);
        }

        public void SetVisibilityPanelMainMenu(bool value)
        {
            _panelMainMenu.SetActive(value);
        }

        public void UpdateTextScore(int score)
        {
            _textScore.text = score.ToString();
        }

        public void UpdateTextHighScore(int highScore)
        {
            _textHighscore.text = highScore.ToString();
        }
    }
}
