/**
 *  @copyright (c) 2018 Krishna Bhatu, Siddhesh Rane
 *  @file    node.cpp
 *  @author  Krishna Bhatu, Siddhesh Rane
 *
 *  @brief class for pixel on an image;
 *
 *  @section DESCRIPTION
 *
 *  This source file implements a Node class.
 *  The class contains methods to get and set
 *  coordinate values of a node, set it's status
 *  and inform whether it is a robot or goal node.
 *
 */
#include "../include/node.h"
/// Initializes parameter with zero values.
Node::Node() {
  x = 0;
  y = 0;
  isGoal = false;
  isRobot = false;
  hN = 0;
}
/// Initializes parameters with user input
Node::Node(const int &nodeX, const int &nodeY, const bool &isRob,
           const bool &isGl) {
  x = nodeX;
  y = nodeY;
  isRobot = isRob;
  isGoal = isGl;
  hN = 0;
}
/// Clears the pointer to the object
Node::~Node() {
}
/// Returns boolean value indicating if node is robot
bool Node::isRobotBool() {
  return isRobot;
}
/// Returns boolean value indicating if node is goal
bool Node::isGoalBool() {
  return isGoal;
}
/// Sets heuristic distance
void Node::setHN(const int& hn) {
  hN = hn;
}
/// Gets distance from starting node
int Node::getHN() {
  return hN;
}
/// Sets x value of the pixel
void Node::setX(const int& xP) {
  x = xP;
}
/// Gets x value of the pixel
int Node::getX() {
  return x;
}
/// Sets y value of the pixel
void Node::setY(const int& yP) {
  y = yP;
}
/// Gets y value of the pixel
int Node::getY() {
  return y;
}
