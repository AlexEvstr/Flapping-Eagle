using evstr.GameConfig;
using UnityEngine;
using Zenject;

namespace evstr.GUI
{
    public class UIEasyLevelButton : UIBaseButton
    {
        private const string NAME_IMAGE = "ImageActive";
        
        private GameObject _imageActive;
        private IGameData _gameData;

        private UIPanelSettings _panleSetting;

        public override void OnClick()
        {
            _panleSetting.ChangeActiveButton(0);
        }

        public void Active()
        {
            _imageActive.SetActive(true);
        }

        public void DisActive()
        {
            _imageActive.SetActive(false);
        }

#if UNITY_EDITOR
        private void OnValidate()
        {
            for(int i = 0; i < transform.childCount; i++)
            {
                if (transform.GetChild(i).gameObject.name == NAME_IMAGE)
                    _imageActive = transform.GetChild(i).gameObject;
            }
            _panleSetting = transform.parent.GetComponent<UIPanelSettings>();
        }
    }
#endif
}
