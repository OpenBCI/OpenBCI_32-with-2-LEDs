/*
 *    This is the formula for determining frequency of blinks 
 *    
 *      sampleCounts = 1000x((1/freq)/2)/4
 *      
 *    where sampleCounts = modulo, freq = blink frequency 
 *    
 *      Example:
 *      25 = 1000x((1/5)/2)/4
 *    
 *    The formula converts to:
 *      
 *      freq = 1/(sampleCounts x8/1000)
 * 
 *  Here's a list of (some) possible blink frequencies
 * 
 *  modulo    |   frequency in Hz
 *  
 *     5      |     25
 *    10      |     12.5
 *    15      |     8.33
 *    20      |     6.25
 *    25      |     5
 *    30      |     4.16
 *    35      |     3.57
 * 
 *  Note: the modulo number is used in the loop to switch the state of the LEDs
 *  
 *  
 *  
 */
