Connect Four
============

The goal of the project is to make two separate AI algorithms, where one would be a serial implementation and the other
one parallel, and compare their effectiveness and speed. 

The implementations are created in C++, and the parallel implementation is built using the CUDA technology.

### The problem


Video games are increasingly popular over the time, and most of them include some form of AI (Artificial Intelligence). 
Whether it's an opponent of the player, or an side character, the AI (bots) in video games are an important part of the game. 

In some types of games, the quality of the AI can influence the quality of the gameplay and the player's satisfaction from it.
It can mean more fun from smarter enemies, or less frustration from better teammates.

Some of the games, are more action packed than others, so the response time is increasingly important. It can mean life or
death of the player.

### Current solutions

At this moment, most of the artificial intelligence in video games, relies on the CPU power. There are higher end CPUs today
that allow running the more complex games, so the latest high budget games are requiring them.

Parallelism in video games is not yet popular enough, so there are high budget games that run on two cores at most, requiring
CPUs with high single core power, or Intel processor with HyperThreading enabled.

### My Goal

In this project, I'll try to implement an AI for a simple video game that will run fully parallel, and one that's serial for
comparison.
