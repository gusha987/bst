using bstproject;
using System.Collections.Generic;
using System.Linq;

public class ExerciseSorter
{
   
        private List<Exercise> allExercises;
        private User currentUser;
        private List<UserExercise> userExercises;

        public ExerciseSorter(List<Exercise> exercises, User user, List<UserExercise> list)
        {
            allExercises = exercises;
            currentUser = user;
            userExercises = list;
    }

        public List<UserExercise> GenerateExercises()
        {
            
            var userOwnedExercises = allExercises.Where(e => e.UserId == currentUser.Id || e.IsPublic);

            foreach (var exercise in userOwnedExercises)
            {
                // Check if the exercise is already added for this user
                if (!userExercises.Any(ue => ue.ExerciseId == exercise.Id && ue.UserId == currentUser.Id))
                {
                    // Create a new UserExercise object
                    userExercises.Add(new UserExercise(currentUser.Id, exercise.Id, DateTime.Now, DateTime.Now, false));
                    Console.WriteLine($"{exercise.Id} is users {currentUser.Username} ");
            }
            }

            return userExercises;
        }
    }
