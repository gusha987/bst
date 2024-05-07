using bstproject;
using System.Collections.Generic;
using System.Linq;

public class ExerciseManager
{
    private List<Exercise> allExercises;
    private User currentUser;

    public ExerciseManager(List<Exercise> exercises, User user)
    {
        allExercises = exercises;
        currentUser = user;
    }

    public List<UserExercise> GenerateUserExercises()
    {
        List<UserExercise> userExercises = new List<UserExercise>();

        // Filter exercises owned by the user or marked as public
        var userOwnedExercises = allExercises.Where(e => e.UserId == currentUser.Id || e.IsPublic);

        foreach (var exercise in userOwnedExercises)
        {
            // Check if the exercise is already added for this user
            if (!userExercises.Any(ue => ue.ExerciseId == exercise.Id && ue.UserId == currentUser.Id))
            {
                // Create a new UserExercise object
                userExercises.Add(new UserExercise( currentUser.Id, exercise.Id));
            }
        }

        return userExercises;
    }
}