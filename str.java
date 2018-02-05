import java.util.*;
import java.lang.*;
import java.io.*;
class GFG 
{
public static void main (String[] args)
{
String input1 = "10e5.4";
String input2 = "2e10";
try
{
Float.parseFloat(input1);
System.out.println(input1 + " is a valid float number");
} 
catch (NumberFormatException e)
{
System.out.println(input1 + " is not a valid float number");
try
{
Float.parseFloat(input2);
System.out.println(input2 + " is a valid float number");
} 
catch (NumberFormatException e)
{
System.out.println(input2 + " is not a valid float number");
}
}
}
    
