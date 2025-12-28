#pragma once
#include<iostream>
#include<opencv2/opencv.hpp>
#include<random>
#include"game_obj_collision.h"
#undef max//避免c++和opencv函数冲突
#undef min//避免c++和opencv函数冲突
class MONSTER:public game_obj_collision
{
private:
	cv::Mat monster_img;
	cv::Mat monster_img_copy;//用于朝向绘制
	cv::Size monster_size;
	//cv::Point monster_position;//没必要再声明一个位置属性，怪物的位置属性是和碰撞框的位置属性相同的，则共用碰撞类的位置属性即可
	cv::Point direction;
	int speed;
public:
	int life_time;
public:
	MONSTER(cv::Point monster_pos);
	~MONSTER();
	void monster_move(const cv::Size & bk_size);
	void monster_draw(const cv::Mat &frame) const;
};

