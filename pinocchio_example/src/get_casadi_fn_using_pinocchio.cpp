#include <iostream>
#include "pinocchio/parsers/urdf.hpp"
#include "pinocchio/algorithm/aba.hpp"
#include "pinocchio/algorithm/rnea.hpp"
#include "pinocchio/autodiff/casadi.hpp"

int main(){
    
    //Create Model
std::string example_dir = "../";
std::string urdf_filename = example_dir+"urdf/panda.urdf";
pinocchio::Model model;
pinocchio::urdf::buildModel(urdf_filename, model);

std::cout<<"yes"<<std::endl;
}
