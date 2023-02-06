
import random
import time
import sys
import pyttsx3

def PrintSlow(letters):
    typing_speed = 150  
    for letter in letters:
        sys.stdout.write(letter)
        sys.stdout.flush()
        time.sleep(random.random()*10/typing_speed)
    print("")

def Speeak(Input):
    engine = pyttsx3.init()
    engine.say(Input)
    engine.runAndWait()

def Read(List, DataFile):
    with open(DataFile, "r") as file:
        for line in file:
            List.append(line)

def Write(Input, DataFile):
    with open(DataFile, "a") as file:
        file.write(Input)

def Main():
    greetings = []
    goodbyes = []
    keywords = []
    responses = []
    
    Read(greetings, "LeslieAIgreetings.txt")
    Read(goodbyes, "LeslieAIgoodbyes.txt")
    Read(keywords, "LeslieAIkeywords.txt")
    Read(responses, "LeslieAIresponses.txt")

    print()
    RandomGreeting = random.choice(greetings)
    PrintSlow("Leslie: " + RandomGreeting)
    #Speeak(RandomGreeting) 

    user = input("Say something (type CACA to quit) -> ")
    user = user.lower()


    while (user != "caca"):
        keyword_found = False 

        for i in range(len(keywords)):
            if (user in keywords[i].lower()):
                print()
                PrintSlow("Leslie: " + responses[i])
                #Speeak(responses[i]) 
                keyword_found = True

        if (keyword_found == False):
            print()
            new_keyword = input("Leslie: I'm not sure how to repond. What keyword should I repond to? -> ")
            if (new_keyword.lower() == "no%"):
                Main()
            keywords.append(new_keyword)
            new_response = input("leslie: How should I repond to " + new_keyword + "? -> ")
            responses.append(new_response)

        user = input(" -> ")
        user = user.lower()
    
    RandomGoodbye = random.choice(goodbyes)
    PrintSlow("Leslie: " + RandomGoodbye)
    #Speeak(RandomGoodbye)
    time.sleep(2.5)

Main()
