# The-Sillysizer
My first DIY, modular, analog synthesizer. A semester-long project made for the grade 12 computer engineering course, TEJ4M.

![20250112_2223321](https://github.com/user-attachments/assets/33baa586-dae3-4620-8b05-e2ffb44f1870)

The Sillysizer features a voltage controlled oscillator (VCO), voltage controlled filter (VCF), voltage controlled filter (VCA), attack/release envelope generator, MIDI to CV (control voltage) converter, and amplifier. 

In the read me files for each module, you can find an explanation for what each knob and jack is used for, a stripboard layout for each module, a picture of the stripboard, credits, and some notes to consider if you are considering building it yourself. 

# Dependencies
To use the MIDI to CV converter, LoopMIDI (virtual MIDI loopback port) and Hairless MIDI (MIDI to serial bridge) must be used to transfer MIDI data to the Arduino. 

# A reflection
This was a perfect first dive into the world of analog of electronics and I learned a lot. Due to the amount of electronics I had to learn for this, I prepared ahead of time for the course. Although everything here is not completely original, modifications have been made and some are building block circuits (Sallen-Key filter, AB amplifier). Specific credits are given in the folders, but by far the majority of my schematics are influenced by [Moritz Klein]([url](https://www.youtube.com/@MoritzKlein0)). For the course, I had to write a Preliminary Design Document (PDD) and explain the circuitry of everything. So, I learned much about BJTs, op amps, and RC filters. Plus, during the process of building it I learned more about the non-ideal properties of my components such as op amp headroom, phase reversal, etc and had to read datasheets to ensure I was using my components correctly. Debugging these circuits also taught me lots and notably I got much more comfortable with using an oscilloscope. 
