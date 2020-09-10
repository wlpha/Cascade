#include "windowmanager.h"

#include <iostream>

#include "vulkanwindow.h"
#include "nodegraph.h"
#include "propertiesview.h"

WindowManager& WindowManager::getInstance()
{
    static WindowManager instance;

    return instance;
}

void WindowManager::setUp(VulkanWindow *vw, NodeGraph *ng, PropertiesView *pv)
{
    vulkanWindow = vw;
    nodeGraph = ng;
    propertiesView = pv;
}

void WindowManager::handleNodeDoubleClicked(NodeBase* node)
{
    propertiesView->loadProperties(node->getPropertiesView());
}

void WindowManager::handleViewedNodeHasChanged(NodeBase* node)
{
    std::cout << "viewedChanged" << std::endl;
}
