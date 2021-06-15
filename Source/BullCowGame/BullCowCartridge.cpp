// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();

    // Welcoming the player
    PrintLine(TEXT("Welcome to Bull Cows!"));
    PrintLine(TEXT("Guess the 4 letter word!")); // Magic Number Remove
    PrintLine(TEXT("Press enter to continue..."));

    InitGame();// Setting up game

    // Prompt player for guess
}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();

    // Checking PlayerGuess

    if (Input == HiddenWord)
    {
        PrintLine(TEXT("You have Won!"));
    }
    else
    {
        PrintLine(TEXT("You have Lost!"));
    }
    
    // Check if Isogram
    // Prompt to guess again
    // Check Right Number of character
    // Prompt to guess again
    
    // Remove Life

    // Check if Lives > 0
    // If Yes GuessAgain
    // Show Lives Left
    // If No show GameOver and HiddenWord?
    // Prompt to play again, Press Enter to play again?
    // Check user input
    // PlayAgain or Quit
}

void UBullCowCartridge::InitGame()
{
    HiddenWord = TEXT("cake");
    Lives = 4;
}