package com.gokulachselvan.amrita.cys.jpl.net;

import java.io.*;
import java.net.*;

public class client {
    public static void main(String[] args) {
        try {
            // Create a socket and connect to the server at "localhost" on port 2444
            Socket s = new Socket("localhost", 2444);

            // Create a DataInputStream to receive messages from the server
            DataInputStream dis = new DataInputStream(s.getInputStream());
            // Create a DataOutputStream to send messages to the server
            DataOutputStream dos = new DataOutputStream(s.getOutputStream());

            // Create a BufferedReader to read input from the client console
            BufferedReader clientReader = new BufferedReader(new InputStreamReader(System.in));

            String serverMessage;
            String clientMessage;

            while (true) {
                // Read client input
                clientMessage = clientReader.readLine();

                // Send client message to the server
                dos.writeUTF(clientMessage);
                dos.flush();

                // Break the loop if the client message is "exit" or "Exit"
                if (clientMessage.equalsIgnoreCase("exit")) {
                    break;
                }

                // Receive message from the server
                serverMessage = dis.readUTF();
                System.out.println("Server: " + serverMessage);

                // Break the loop if the server message is "exit" or "Exit"
                if (serverMessage.equalsIgnoreCase("exit")) {
                    break;
                }
            }

            // Close the resources
            dis.close();
            dos.close();
            clientReader.close();
            s.close();
        } catch (IOException e) {
            System.out.println("An error occurred: " + e);
        }
    }
}
