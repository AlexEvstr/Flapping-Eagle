namespace evstr.GameConfig
{
    public interface IGameData
    {
        int GetScore { get; }
        int GetHighScore { get; }
        bool AudioStatus { get; set; }
        GameDifficulty GameDifficulty { get; set; }

        void IncreaseScore();
        void IncreaseHighScore();
    }
}
