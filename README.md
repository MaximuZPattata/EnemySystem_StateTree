# EnemySystem\_StateTree

Testing out the state tree tool for the enemy system(Includes usage of Enemy AI logic + NavMesh + AI Perception + AIController)



\# The enemy AI is driven using Unreal Engine State Tree with the following states:

1. Idle – Default inactive state
2. Patrol – Roams between predefined spline points
3. Alert – Triggered on perception(sight, hearing and damage) stimulus
4. Investigate – Moves to the last known stimulus location
5. Chase – Pursues the player
6. Attack – Engages when in range
7. Retreat – Disengages when health is low(below 25)
8. Heal – Regenerates health inside a healing zone



\## State transitions account for:

1. Perception updates
2. Health changes
3. Movement success/failure
4. Higher-priority state interruptions



\### A common State Tree task runs across all states to:

1. Manually assign a State Tag to the AI Controller

2\. Keep the controller aware of the currently active state

3\. Allow the AI Controller to use the active state as a condition for event handling



\#### The AI system heavily uses Event Dispatchers to decouple State Tree tasks from the AI Controller logic.



\##### A green transparent cylinder mesh is placed at the level to represent a healing zone. When the enemy enters the zone, it transitions to the Heal state. Healing is implemented using a looping timer event. Health is restored at fixed intervals and clamped to a predefined threshold value(>50%).



\###### Note: 

1. It is heavily visually scripted(Only Blueprints). If time permits, I will get into the core of it through C++.
2. There seems to be a bug - After healing, the Noise Sense perception may report an irregular stimulus location. Will look into that further.
3. I haven't been able to add any visual details to the prototype. Most of it is represented using the print string logic.





###### **####### Controls:**

###### 

1. ###### **Move around using WASD. Space for jump and Mouse for Camera.**
2. ###### **Q to create a noise report - Enemy moves to an alert state and walks towards the noise location to investigate.**

###### **3. E to damage enemy(when within range) - If health is below 25, the enemy runs towards the safe point, i.e. the corner green cylinder.**

