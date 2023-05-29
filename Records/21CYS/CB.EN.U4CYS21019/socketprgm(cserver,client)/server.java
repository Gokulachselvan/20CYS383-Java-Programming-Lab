package com.gokulachselvan.amrita.cys.jpl.net;

import java.io.*;
import java.net.*;

public class server {
    public static void main(String[] args) {
        try {
            // Create a server socket on port 2444
            ServerSocket ss = new ServerSocket(2444);

            // Wait for a client to establish a connection
            Socket s = ss.accept();

            // Create a DataInputStream to receive messages from the client
            DataInputStream dis = new DataInputStream(s.getInputStream());
            // Create a DataOutputStream to send messages to the client
            DataOutputStream dos = new DataOutputStream(s.getOutputStream());

            // Create a BufferedReader to read input from the server console
            BufferedReader serverReader = new BufferedReader(new InputStreamReader(System.in));

            String clientMessage;
            String serverMessage;

            while (true) {
                // Receive message from the client
                clientMessage = dis.readUTF();
                System.out.println("Client: " + clientMessage);

                // Break the loop if the client message is "exit" or "Exit"
                if (clientMessage.equalsIgnoreCase("exit")) {
                    break;
                }

                // Read server input
                serverMessage = serverReader.readLine();

                // Send server message to the client
                dos.writeUTF(serverMessage);
                dos.flush();

                // Break the loop if the server message is "exit" or "Exit"
                if (serverMessage.equalsIgnoreCase("exit")) {
                    break;
                }
            }

            // Close the resources
            ss.close();
            dis.close();
            dos.close();
            serverReader.close();
            s.close();
        } catch (IOException e) {
            System.out.println("An error occurred: " + e);
        }
    }
}