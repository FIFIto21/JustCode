
import pyttsx3
import speech_recognition as sr 

r = sr.Recognizer() # Set microphone recognizer 
ProgramRunning = True

def Speeak(command): # Speek function
    engine = pyttsx3.init()
    newVoiceRate = 145 # Voice velocity 
    engine.setProperty("rate",newVoiceRate) 
    engine.say(command)
    engine.runAndWait()

def Listen(): # Listen weith microphone function
    with sr.Microphone() as source2:
        r.adjust_for_ambient_noise(source2, duration = 2)
        audio2 = r.listen(source2)
        
        ListenInput = r.recognize_google(audio2)

        ListenInput = ListenInput.lower() # Make ListenInput lower caps

        return ListenInput

def Answers(words): # Answers function
    
    if "hi" in words or "hello" in words:
        if "name" in words:
            Speeak("Its a placure meeting you my bro")
        else:
            Speeak("i already said hi to you, but anyways, hi")
    
    elif "how are you" in words:
        Speeak("i'm good, what about you?")
    
    elif "i'm good" in words or "i'm fine" in words or "i'm ok" in words:
        Speeak("thats good to hear")
    
    elif "your favorite color" in words:
        Speeak("my favorite color is green")

    elif "your gender" in words:
        Speeak("i dont have a gender")
    
    elif "you doing" in words:
        Speeak("im talking to you")

    elif "spanish" in words:
        Speeak("im learning spanish, but im quite bad at it")

    elif "your name" in words:
        Speeak("my name is Melani")

    elif "your favorite south park" in words:
        Speeak("my favorite south park character is butterz")

    elif "your creator" in words:
        Speeak("my creator is fifi, more kwon as el bro")

    elif "fuck you" in words:
        Speeak("fuck you too your piace of shit")

    elif "exit" in words:
        Speeak("exiting the program")
        ProgramRunning = False

    else:
        Speeak("Sorry, i didn't understod you")

    print("Input was '" + words + "'")
    


def Main():
   
    Speeak("hello, my name is Melani")

    while (ProgramRunning):
        Answers(Listen())
        TrashInput = input("Insert something to continue -> ")

Main() # Execute the main function




