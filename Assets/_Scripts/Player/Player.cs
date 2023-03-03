using evstr.Generals;
using evstr.ObjectDetector;
using evstr.Audio;
using UnityEngine;
using Zenject;

namespace evstr.Player
{
    [RequireComponent(typeof(Rigidbody2D))]
    public class Player : MonoBehaviour
    {
        private Rigidbody2D _rigidbody2D;
        public Rigidbody2D GetRigidbody2D => _rigidbody2D;

        private IFlap _flapBehaviour;
        private IInputSystem _inputSystem;
        private AudioService _audioService;

        private float _forceFlap = 5f;
        public float ForceFlap => _forceFlap;

        [Inject]
        private void Construct(IInputSystem inputSystem, AudioService audioService)
        {
            _inputSystem = inputSystem;
            _audioService = audioService;

            _rigidbody2D = GetComponent<Rigidbody2D>();
            _flapBehaviour = new PlayerBehaviour(this);
        }

        private void OnEnable()
        {
            _inputSystem.OnTapped += _flapBehaviour.Flap;
            _inputSystem.OnTapped += _audioService.PlayFlapSound;       
        }

        private void OnDisable()
        {
            _inputSystem.OnTapped -= _flapBehaviour.Flap;
            _inputSystem.OnTapped -= _audioService.PlayFlapSound;
        }

        private void OnTriggerEnter2D(Collider2D collision)
        {
            IDetector detector = collision.gameObject.GetComponent<IDetector>();
            if (detector != null)
                detector.OnCollision();
        }
    }
}