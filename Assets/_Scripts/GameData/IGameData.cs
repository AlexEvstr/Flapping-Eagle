namespace evstr.GameConfig
{
    public interface IGameData
    {
        int GetScore { get; }
        bool AudioStatus { get; set; }
        GameDifficulty GameDifficulty { get; set; }

        void IncreaseScore();
    }
}
