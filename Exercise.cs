namespace bstproject
{
    public class Exercise
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public string Url { get; set; }
        public int UserId { get; set; } // Owner user ID
        public bool IsPublic { get; set; } // Visibility flag

        public Exercise(int id, string name, string url, int userId, bool isPublic)
        {
            Id = id;
            Name = name;
            Url = url;
            UserId = userId;
            IsPublic = isPublic;
        }
    }
}
