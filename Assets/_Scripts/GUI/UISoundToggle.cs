using evstr.GameConfig;
using UnityEngine;
using UnityEngine.UI;
using Zenject;

namespace evstr.GUI
{
    public class UISoundToggle : UIBaseButton
    {
        private IGameData _gameData;
        private GameObject _checkmark;

        [Inject]
        private void Construct(IGameData gameData)
        {
            _gameData = gameData;
        }

        public override void OnClick()
        {
            if (_gameData.AudioStatus)
            {
                _checkmark.SetActive(true);
                _gameData.AudioStatus = false;
                AudioListener.volume = 0;
            }
            else
            {
                _checkmark.SetActive(false);
                _gameData.AudioStatus = true;
                AudioListener.volume = 1;
            }
        }

        public override void OnEnable()
        {
            base.OnEnable();
            if (_gameData.AudioStatus)
                _checkmark.SetActive(false);
            else
                _checkmark.SetActive(true);
        }
#if UNITY_EDITOR
        private void OnValidate()
        {
            _checkmark = transform.GetChild(0).gameObject;
        }
#endif
    }
}