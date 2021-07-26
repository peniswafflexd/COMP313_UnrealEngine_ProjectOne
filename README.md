# Devon Gregory #300414962
## (COMP313 Assignment One) *Waking Skelly* (Overview: https://www.youtube.com/watch?v=NE7amfvAxL8)

### Game Description 
 Have you ever been the dragonborne or hero who invaded the dungeon or crypt, killing all the poor skeletons in sight and stealing their loot? 
 Well now you are the Skeleton! Fight back at the hordes of humans and heros who have woken you from your fateful slumber to plunder your chests of gold and potions.
 
 Waking Skelly is a rogue-like, round-based action game that involves medieval weapons and spells. You start at round 1 and keep attempting to make it to higher and higher rounds. Collecting coins and spending them on better weapons to kill the humans with. 
 
 The main action in Waking Skelly is to survive as many round as you possibly can. To finish a round you must first defeat all of the enemies, then you will move onto the next round. The higher the rounds, the higher the diffculty.
 
 ##### Hardest part to Implement
  The hardest part of the game to implement would (probably be the things that never got implemented) be the ranged AI to choose a correct spot to stand relative to the player that was at a good distance that they couldnt be hit by the player and not be too far that by the time the spells go to the player he could be half way across the map, as well as having a line of sight. I originally had a fairly complicated behaviour tree set up to handle this but after trying for approximately 7 hours to get this working, I discovers the Environmental Query Systemm (EQS). EQS allows you to define a bunch of target locations relative to a context (in my case the player) and score each target location with a bunch of parameters, picking the one with the highest score. It can be used for a massive range of things.
  
  
 ##### Most Interesting Part of the Game
  For me the most interesting part of the game would be the combat, its at least the most fun. The magic system is definitely the most fun, if I were to keep working on this game I would like to add a lot more spells and give the players the option to sway their character to a more mage-like class based on the upgrades they give it.
  
  
### Marking Template

- [x] Control a Character on screen
    * ThirdPersonCharacter (Skelly)
- [x] Have a Character Interact with objects in the World
    * Potions
    * Coins 
    * Interactable Chests
- [x] Change a Score on Screen
    * Player Coins 
    * Mana
    * Health
- [x] Animate a Character Based on Movement
    * Blendspaces
    * Animation Blueprint
- [x] Manage Assets and How They are Created and Removed
    * Enemy Spawners
    * Enemy Death
    * Consumables Spawned From Chests
    * etc.
- [x] Move NPC's Around
    * Melee Units
    * Ranged Units
- [x] Play Sounds
    * Level Music (3 Different Tracks)
    * Widget Hover & Clicks sounds
    * Chest Opening
    * Consumables
    * Melee & Magic Attacks
    * Dynamic footstep sounds tied to animation through animNotifies
- [x] Restart a Level
    * On death Respawn
- [x] Show a Final Screen
    * Death Widget
- [x] Create a Settings Menu with at Least a Toggle & Slider Interaction
    * Press P to Pause Settings for Audio and Video
- [x] Create at Least One Blueprint Node in C++
    * LoadWeaponMeshes.cpp
    * WeaponPath.cpp
    * VectorBetween2Vectors.cpp 
- [x] Make a Video Showing off the Project
    * https://www.youtube.com/watch?v=NE7amfvAxL8


Note: The Buying and Equipping Weapons were working right up until I made the video, not sure why it stopped working.
Another Note: I only started this 2 weeks before it was due, as I had to go an buy a PC that was capable of running the software.

Developed with Unreal Engine 5
