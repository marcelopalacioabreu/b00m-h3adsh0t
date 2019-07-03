# b00m-h3adsh0t
Neural Network Configurable Aimbot for FPS games

## Aimbot General
* Trained by NN (Neural Network)
* Customizable predictions and speed settings 
* Select which FPS game you will use


## Model Recognization 
* Custom training mode 
* Enter to train NN to detect objects for object recognition 
* Train with range of distances, lights, and angles for best possible recognition
* Name-tag display to detect players 
* Pixel memory hack
* Resolution range 


## How it works 
* Recognizes game objects in a certain range, then aims at the objects
* Neural Network 
    * Program takes multiple screenshots to recognize objects 
    * Different distances, lights, angles for best possible recognition 
    * Output - program writes in cfg file 
      * Batch = 1
      * Subdivision = 1 for testing 
    * Graph of Training/Validation Set 
      * x vs y 
      * Error Rate vs Number of Iterations in Training Set 
* Training depenencies - Trained files for games
    * config.json file - to change the resolution range for object recognition  
    * Train files folder
      * darknet folder/subfolders 
      * data or back up
      * GAME.names
      * GAME.cfg
      * GAME_last.weights 
      * GAME.weights

## Player Attacks 
* Select button to attack and enable/disable training mode 
* Custom Zooming Control with scroll wheel 
* Custom cursors (laser-sight)
* Trigger-bot
* Auto-shoot
* Auto clicker - for semi automatic weapons 
* Dynamic recoil control system 

## Other Glitches 
* Wall Glitches
* Reduced Flash 
* Transparent buildings, ceilings, obstacles and trees
* Display Enemy lines 
