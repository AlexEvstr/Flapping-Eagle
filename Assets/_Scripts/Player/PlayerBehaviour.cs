using UnityEngine;

namespace evstr.Player
{
    public class PlayerBehaviour : IFlap
    {
        private Player _player;

        public PlayerBehaviour(Player player)
        {
            _player = player;
        }

        public void Flap()
        {
            _player.GetRigidbody2D.velocity = Vector2.up * _player.ForceFlap;
        }
    }
}
