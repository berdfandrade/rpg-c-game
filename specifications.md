# Specifications

Now that we've covered the basics of compilation and modularity (we'll refine that section later) lets move on to game design. Our game will be implemented using the terminal and will not rely on any third party libraries, save for the ones that come with C by default. We'll take a Bottom-Up approach to creating our Role-playing Game (hereafter referred to as an RPG). 

When undergoing a new project of some complexity, it is important to do some brainstorming about what your program will do and how you'll implement it. While that may sound painfully obvious, it is often tempting to jump right into coding and implement ideas as they pop into your head. It isn't until the code becomes hundreds of lines long does it become clear that organizing your thoughts is necessary. The initial brainstorming phase takes the main idea, an RPG in this case, and breaks it down into more elementary pieces. For each element, we either break it down into still smaller elements, or give a short summary of how we might implement it. In a commercial environment, this brainstorming session produces a [Specification Document](https://en.wikipedia.org/wiki/Product_requirements_document).

At the heart of every RPG, we have players. 

Players shouldː

    - Have stats that tell us about their abilities.
    - Be able to interact with each other (i.e. Talking, Fighting)
    - Be able to move from one location to another.
    - Be able to carry items.

*Stats*ː Easy. Just a variable telling us what the stat is for (like, health) and containing an integer value. 

Talkingː To facilitate conversation, players need scripted dialog. This dialog could be stored with the main character, or the person with whom the main character will interact, and in the case of the latter, must be accessible by the main character.

Fightingː A function, that when given a player (to attack) initiates a battle sequence, that persists until someone retreats or a player's health is reduced to 0.

Mapping: A vast and epic journey involves many locations. Each location node tells us what the player sees once he reaches that location, and where he can go from there. Each location node has the same structure. This new node will be structured the same as the first, but contain different information. Each location node is assigned a unique location ID that tells the computer where another location node can be found. "Where he can go" is traditionally an array of up to 10 location IDs, to allow the player to go up to 10 directions -- up, down, north, south, east, northeast, etc.

Movingː A player should contain a node for a linked list or binary tree. The first location ID tells us where the player is currently. The second location ID tells us where the player came from (so players can say "go back"). Moving will involve changing the player's location (Swamp, let's say), to the location ID of another node (Forest). If that sounds confusing, don't worry, I'll make pictures to illustrate the concept. ː)

Inventoryː Inventory will start out as a doubly linked list. An item node contains an item (Health Potion), the number of that item, a description of the item, and two links. One link to the previous item in the list, and a second link to the next item in the list.

This preliminary specification acts as a blueprint for the next phase, the actual coding portion. Now that we've broken the main idea into smaller elements, we can focus on creating separate modules that enable these things. As an example, we will implement the player and player functions in the Main file for testing. Once we're positive that our code is working properly, we can migrate our datatypes and functions into a Header file, which we'll call whenever we want to create and manipulate players. Doing this will significantly reduce the amount of code to look at in the main file, and keeping player functions in the player header file will give us a logical place to look for, add, remove, and improve player functions. As we progress, we may think of new things to add to our specification. 