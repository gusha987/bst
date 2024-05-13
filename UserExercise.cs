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


        


        public UserExercise(int userId, int exerciseId,DateTime edited, DateTime used, bool favo )

        {
            UserId = userId;
            ExerciseId = exerciseId;
            LastEdited = edited;
            LastUsed = used;
            IsFavorite = favo;

        }
        
    }
}
