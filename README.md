# b00m-h3adsh0t &#x1F537;
**Neural Network Configurable Aimbot for First-Person-Shooter Games in C/C++** *Note: Aimbots are cheats and illegal in gaming leagues. This repo is solely for educational purposes only.*

> **┬┴┬┴┬┴┤ (҂   ` ﾛ ´)︻デ═一_______________________________＼(º □ º )/	├┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴┬┴**

<div>
  
  [![Status](https://img.shields.io/badge/status-work--in--progress-success.svg)]()
  [![GitHub Issues](https://img.shields.io/github/issues/lucylow/b00m-h3adsh0t.svg)](https://github.com/lucylow/Mrs.Robot/issues)
  [![GitHub Pull Requests](https://img.shields.io/github/issues-pr/lucylow/b00m-h3adsh0t.svg)](https://github.com/lucylow/b00m-h3adsh0t/pulls)
  [![License](https://img.shields.io/bower/l/bootstrap)]()

</div>

---   
## Table_of_Contents &#x1F537;


* [Motivation](#Motivation-)
* [Aimbot_Neural_Network](#Aimbot_Neural_Network-)
* [Technical_How_Aimbot_Works](#Technical_How_Aimbot_Works-)
* [Technical_How_Aimbot_with_Neural_Network_Works](#Technical_How_Aimbot_with_Neural_Network_Works-)
* [Client-Server_Back-End_Implementation](#Client-Server_Back-End_Implementation-) 
* [Security_and_Efficiency_Game_Server](#Security_and_Efficiency_Game_Server-)
* [Player_Behavior_Statistics](#Player_Behavior_Statistics-)
* [User_Privacy](#User_Privacy-)
* [Player_Attacks](#Player_Attacks-) 
* [Glitches and Modifications](#Glitches_and_Modifications-) 
* [References](#References-) 

---
## Motivation &#x1F537;

* **"Boom, Headshot" said by pro gamer FPS_Doug on the web series Pure Pwnage**
* Game bot software for first-person shooting (FPS) games where players need to constantly move, think, strategize, and shoot enemies all at once - Aimbot uses game data to automatically shoot at the heads of energy targets

* B00m-h3adsh0t is 100% written in C/C++ providing a very fast, and efficient framework with scripting support such that the framework uses a consistent object-oriented design

  ![](https://github.com/lucylow/b00m-h3adsh0t/blob/master/readme-images/logo2.png)
  
  *Image. “Turn off the b00m-h3adsh0t aimbot you noob K/D ratio hacker!"*



---

## Aimbot_Neural_Network &#x1F537;

* **Trained by neural network (NN) with customizable predictions and dynamic speed settings**
* Select which FPS game you will use 
* **Engine-Aim with colored models:**
  * Hook into the FPS game engine to use actual game data to auto-aim without altering gaming files
  * Modifies memory of RAM half-life runs on 
  * Gathers information from current game and pixel location
  
    ![](https://github.com/lucylow/b00m-h3adsh0t/blob/master/readme-images/gameplay1.png)

    *Image. Custom training mode on the aimbot with a range of functionalities*
    
* Model Training Recognization
  * **Custom training mode**
  * Leverage neural network to detect objects for object recognition using computer vision algorithms
  * Train with range of distances, lights, and angles for best possible recognition  

---


## Technical_How_Aimbot_Works &#x1F537;

* **Aimbot can be easily toggled on and off using the mouse or keyboard**
* Recognizes game objects in a certain range, then aims at the objects using game physics

* **Game Player Detection** 
  * FPS game memory contains the **(X,Y,Z) coordinates of each player for rendering**
  * Aimbot scans memory locations for this information 
  * **Gain access to two key positions** - the player and enemies coordinates 
  * Subtracting the two positions as vectors == the vector between the two 
  * Calculate the **angle from the player's current vector to the desired angle vector**

* **Aim Automatically**
  * Inject information directly to the game
    * DLL injection
    * **Overwriting current FPS game aim functions**
    * Patching in-place the Direct3D or OpenGL DLL 
  * Examining the **functions calls to draw geometry**
  * Insert own geometry functions (for things like wall-hacks or glitches)
  * Fine-tune with constants adjusting for any **dynamic data structure moving players** around on you


---

## Technical_How_Aimbot_with_Neural_Network_Works &#x1F537;

* **Neural Network** 

    * Program takes **multiple screenshots** to recognize objects 
    * Different distances, lights, angles for best possible recognition 
    * Output - program writes in **cfg file** 
      * Batch = 1
      * Subdivision = 1 for testing 
    * Graph of **Training/Validation Set**
      * Graph x vs y 
      * Error Rate vs Number of Iterations in Training Set 
      
* **Training Depenencies - Trained Files for Games**

    * Use **config.json file** to change the resolution range for object recognition  
    * Train Files Folder
      * Darknet folder/subfolders 
      * Data or back up
      * GAME.names
      * GAME.cfg
      * GAME_last.weights 
      * GAME.weights

---

## Client-Server_Back-End_Implementation &#x1F537;

* Computer has to display the gameplay to the user by rendering the whole map and every player in it

* **Client–Server Model Method**

  * Model instantaneously calculating/sending game results
  * **Client sessions run synchronously with aimbot server with user input data**
  * Run aimbot purely on game server
  * Run server mirrors client gameplay and continuously validates each game state
 
* **Modifying Game Rules World Method**

  * Aimbot targets servers with no rule enforcement or data integrity 
  * **Synchronize all client data with information about all of the other clients** 
    * Reveals where all the players in the game are via (X,Y,Z) coordinates
    * Reveals user game states with information on player names, position, clip ammo, ammo count, health, class, weapons, frame rate and more.
  * Data from client will allow player to break game rules, manipulate server, or manipulate other clients


  

---


## Security_and_Efficiency_Game_Server &#x1F537;

* Server responsible for information security and enforcing game rules

* **Sending Game World State needed for Immediate Display**
  * Results in client lag under bandwidth constraints

* **Sending the Player the Entire World State**
  * Results in faster display for  player under the same bandwidth constraints
  * Exposes  data to interception or manipulation
  * Trade-off between security and efficiency


---

## Player_Behavior_Statistics &#x1F537;

* **Pattern Detection Systems**
  * Scan player's hard drives for known cheat code or programs
  * Scan player's system memory for known cheat code or programs
  * Labor-intensive to constantly track down cheats and update detection patterns

* **Anti–Cheat Method**
  * Guaranteed to work on all end–user system configurations
  * Reduce the amount of false positives

* **Player Behavior Anomalie Detection** 
  * Detected by statistically analyzing game events 
  * Data sent by client to  server by statistical detection systems
  * Add human element of supervision system (community/admin team looks over player statistics) 
  
      ![](https://github.com/lucylow/b00m-h3adsh0t/blob/master/readme-images/gameplay2.png)
      
      *Image. Unusual player behavior leads to clientside creating then uploading a gamer report*
  


---

## User_Privacy &#x1F537;

* **End–users concerned with privacy issues and "Never trust the client" is common saying with game developers**
* VAC (Valve Anti-Cheat) accessing browsing history
* User privacy compromised with packet interception/manipulation 
* **Man-in-the-Middle Attack**
  * Reverse engineer the network packet formatting
  * Security of game circumvented by intercepting or manipulating data in real-time while transit from the client to the server or vice versa
  * Performed on client machine itself or via external communication proxy
  * Can provide player positions and other useful related information
  * Forged packets sent to server to move the player, shoot, or other game actions





---

## Player_Attacks &#x1F537;

* **Select button to attack and enable/disable training mode**
* Custom zooming control with scroll wheel 
* Custom cursors 
* Laser sight
* Trigger bot
* Move speed
* Ammo count
* Player radar 
* Name-tag display to detect players 
* Auto shoot/rapid fire
  * Most fps games limit the rate weapons are fired regardless of how fast a player presses buttons
  * Binding the firing button to the scroll wheel of a mouse
  * Macro setting that will simulate rapid key presses automatically
  * Set aiming speed and shooting delay
* Auto clicker for semi automatic weapons 
* Dynamic recoil control  
  * Remove gun revoil game element
  * Control bullet spread
  * Correcting for bullet drop


---


## Glitches and Modifications &#x1F537;

* Wall hacks
  * Glitches with game surfaces
  * Graphics driver modifications that ignore depth checking
  * Draw all objects on the screen
* Reduced flash 
* Correcting for ping/lag
* Resolution range 
* Pixel memory hack
* Transparent buildings, ceilings, obstacles, and trees
  * Remove visual elements of the game 
  * Ex Replace opengl32.dll with one that would render polygons transparent 

* Display enemy lines 
* Extrasensory perception (ESP)
  * Display all the enemy positions on the map
  * Glowing or lighted players, weapons, and loot. 
  * See all players at all times and plan ahead before making a kill
  * Show all information ex: player names, position, clip ammo, ammo count, health, class, weapons, frame rate and more


---

## References &#x1F537;

* MultiPlayer Game Hacking - How to make a aimbot (in C) for any FPS game  https://www.mpgh.net/forum/showthread.php?t=191416
* Aimbot Detection in Online FPS Games Using a Heuristic Method Based on Distribution Comparison Matrix: https://link.springer.com/chapter/10.1007/978-3-642-34500-5_77
* 2D collision detection headers in C/C++ routines on primitives, boolean results and/or manifold generation, shape cast/sweep test, raycasts/ https://github.com/RandyGaul/cute_headers
* Multi-threaded game engine written in C++. https://github.com/BearishSun/BansheeEngine

