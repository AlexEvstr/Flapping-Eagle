using UnityEngine;

namespace evstr.GUI
{
    [RequireComponent(typeof(MeshRenderer))]
    public class UIBackgroundLoop : MonoBehaviour
    {
        private float _speed = 0.01f;
        private MeshRenderer _meshRenderer;

        private Vector2 _meshOffset;

        private void Start()
        {
            _meshRenderer = GetComponent<MeshRenderer>();
            _meshOffset = _meshRenderer.sharedMaterial.mainTextureOffset;
        }

        private void OnDisable()
        {
            _meshRenderer.sharedMaterial.mainTextureOffset = _meshOffset;
        }

        private void Update()
        {
            var x = Mathf.Repeat(Time.time * _speed, 1);
            var offset = new Vector2(x, _meshOffset.y);

            _meshRenderer.sharedMaterial.mainTextureOffset = offset;
        }
    }

}