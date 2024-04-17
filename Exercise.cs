namespace bstproject
{
    public class Exercise
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public string Url { get; set; }
        public DateTime LastEdited { get; set; }
        public DateTime LastUsed { get; set; }
        public Boolean IsFavorite { get; set; }

        public Exercise(int id, string name, string url)
        {
            Id = id;
            Name = name;
            Url = url;
            LastEdited = DateTime.Now;
            LastUsed = DateTime.Now;
            IsFavorite = false;
        }
    }
}
