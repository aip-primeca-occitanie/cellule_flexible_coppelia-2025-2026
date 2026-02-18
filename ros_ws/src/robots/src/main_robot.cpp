/**** Projet long N7 2017 - ROS2 version ****/

#include "Robot.h"
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/byte.hpp>
#include <memory>
#include <string>

using std::string;

// Callback de shutdown
void ShutdownCallback(const std_msgs::msg::Byte::SharedPtr /*msg*/)
{
    rclcpp::shutdown();
}

int main(int argc, char **argv)
{
    // Initialisation du noeud ROS2
    rclcpp::init(argc, argv);

    string name = "robot";
    name.append(argv[1]);

    auto node = std::make_shared<rclcpp::Node>("robots");

    // Subscriber shutdown
    auto sub_shutdown = node->create_subscription<std_msgs::msg::Byte>(
        "/commande_locale/shutdown", 10, ShutdownCallback);

    // Création de l'objet Robot
    int num_robot = atoi(argv[1]);
    Robot robot(num_robot);

    // Initialisation des publishers, subscribers et services
    robot.init(node);

    int compteur = 0;
    rclcpp::Rate loop_rate(25); // 25 Hz

    while(rclcpp::ok())
    {
        if(compteur++ > 25)
        {
            robot.update();
            compteur = 0;
        }

        rclcpp::spin_some(node);
        loop_rate.sleep();
    }

    rclcpp::shutdown();
    return 0;
}
