using evstr.Player;
using System;
using Unity.VisualScripting;
using UnityEngine;
using Zenject;

namespace evstr.Generals
{
    public class InputSystemAndroid : IInputSystem
    {
        public event Action OnTapped;

        private IUpdateLoop _updater;

        [Inject]
        private void Construct(IUpdateLoop update)
        {
            _updater = update;
            OnEnable();
        }

        public void OnEnable()
        {
            _updater.OnUpdate += Update;
        }

        public void OnDisable()
        {
            _updater.OnUpdate -= Update;
        }

        public void Update()
        {
            if (Input.touchCount > 0)
            {
                if (Input.GetTouch(0).phase == TouchPhase.Began)
                    OnTapped?.Invoke();
            }
        }
    }
}
