using System.Xml.Linq;
using System;

namespace bstproject
{
    public class UserExercise
    {
        public int UserId { get; set; }
        public int ExerciseId { get; set; }
        public bool IsFavorite { get; set; }
        public DateTime LastUsed { get; set; }

        public DateTime LastEdited { get; set; }


        


        public UserExercise(int userId, int exerciseId)

        {
            UserId = userId;
            ExerciseId = exerciseId;
            LastEdited = DateTime.Now;
            LastUsed = DateTime.Now;
            IsFavorite = false;

        }
        
    }
}
