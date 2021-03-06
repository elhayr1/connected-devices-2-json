#ifndef DEVICES_TREE_H
#define DEVICES_TREE_H

#include <algorithm>
#include <vector>
#include "JSON.h"
#include "devices_parser.h"
#include "device_node.h"

#define DEBUG_MODE false

class DevicesTree
{
public:
	DevicesTree();
	~DevicesTree();
	void feedTree();
	void devicesTreeToJSON(DeviceNode *node, JSONObject& out);
	void printTree(DeviceNode *node);
	void printNode(DeviceNode *node);
	DeviceNode* root();
	void addNodePath(char* description,
					size_t descSize, 
					char* path, 
					size_t pathSize);

private:
	DeviceNode *_root;
	DevicesParser _devParser;
	void deleteTree(DeviceNode *node);

};

#endif