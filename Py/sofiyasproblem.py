def ImageDataAnalysis_DataFile(filename): 
  import pandas as pd
  import os,sys
  import numpy as np
  from google.colab import drive
  import matplotlib.pyplot as plt
  import sklearn.manifold as skm
  drive.mount ('/content/drive')
  basic_category_session =  pd.read_pickle(filename)
  return basic_category_session

  unique_categories = basic_category_session['image_category'].unique()
  print(unique_categories) 
  return print(unique_categories)

  performance_by_category = [] #make an empty list
  rt_by_category = []
  for category in unique_categories: #loop through each category and calculate percent correct for each, and hey also reaction time
    current_index = basic_category_session['image_category'] == category
  tmp_session = basic_category_session[current_index].copy()
  performance_by_category.append(np.mean(tmp_session['trial_outcome'].values))
  rt_by_category.append(np.mean(tmp_session['reaction_time'].values))
  import matplotlib.font_manager as fm

  from matplotlib import rcParams
  rcParams['font.family'] = 'serif'
  rcParams['font.serif'] = [ 'Liberation Serif']

  fig, ((ax1, ax2)) = plt.subplots(nrows=1, ncols=2,dpi=100,figsize=(6,6))
  fig.tight_layout(pad=4.0)
  plt.suptitle("Performance and Reaction time",y=.70)
  ax1.plot(unique_categories,performance_by_category)
  ax2.plot(unique_categories,rt_by_category)

  ax1.set_box_aspect(1)
  ax2.set_box_aspect(1)
  ax1.set_ylim((0.5,1))
  for tick1,tick2 in zip(ax1.get_xticklabels(),ax2.get_xticklabels()):
    tick1.set_rotation(45)
    tick2.set_rotation(45)

#set xlabels
  ax1.set_xlabel('Object category',style='italic')
  ax2.set_xlabel('Object category',style='italic')

#set ylabels
  ax1.set_ylabel('Performance (%correct)')
  ax2.set_ylabel('RT (ms)')

  for pos in ['right', 'top']:
    ax1.spines[pos].set_visible(False)
    ax2.spines[pos].set_visible(False)
  
  import matplotlib.pyplot as plt
  import numpy as np

# Create a new list of categories containing only 'animals' and 'tables'
  categories_to_plot = ['fruits', 'faces', 'animals', 'boats', 'planes', 'tables', 'cars', 'chairs']

  performance_by_category = [] #make an empty list
  rt_by_category = []
  for category in categories_to_plot: #loop through each category and calculate percent correct for each, and hey also reaction time
    current_index = basic_category_session['image_category'] == category
    tmp_session = basic_category_session[current_index].copy()
    performance_by_category.append(np.mean(tmp_session['trial_outcome'].values))
    rt_by_category.append(np.mean(tmp_session['reaction_time'].values))

  import matplotlib.font_manager as fm

  from matplotlib import rcParams
  rcParams['font.family'] = 'serif'
  rcParams['font.serif'] = [ 'Liberation Serif']

  fig, axs = plt.subplots(nrows=4, ncols=4,dpi=400,figsize=(14,6))
  fig.tight_layout(pad=4.0)
  plt.suptitle("Performance and Reaction time",y=1)

# Filter performance and reaction time lists based on the new list of categories
  performance_to_plot = [performance_by_category[i] for i in range(len(performance_by_category)) if categories_to_plot[i] in categories_to_plot]
  rt_to_plot = [rt_by_category[i] for i in range(len(rt_by_category)) if categories_to_plot[i] in categories_to_plot]

# Iterate over categories and plot each one on its own subplot
  for i, category in enumerate(categories_to_plot):
    row = i // 4
    col = i % 4
    
    ax1, ax2 = axs.flatten()[i*2:(i*2)+2]
    
    current_index = basic_category_session['image_category'] == category
    tmp_session = basic_category_session[current_index].copy()
    performance = np.mean(tmp_session['trial_outcome'].values)
    rt = np.mean(tmp_session['reaction_time'].values)
    
    # Set the title of the subplot to the category name
    ax1.set_title(category)
    
    # Plot performance and reaction time on the respective subplots
    ax1.plot([category], [performance], marker='o', markersize=1, color='black')
    ax2.plot([category], [rt], marker='o', markersize=1, color='black')

    ax1.set_box_aspect(1)
    ax2.set_box_aspect(1)
    ax1.set_ylim((0,1))
    for tick1,tick2 in zip(ax1.get_xticklabels(),ax2.get_xticklabels()):
        tick1.set_rotation(45)
        tick2.set_rotation(45)

    #set xlabels
    #ax1.set_xlabel('Category',style='italic')
    #ax2.set_xlabel('Category',style='italic')

    #set ylabels
    ax1.set_ylabel('%Correct)')
    ax2.set_ylabel('RT (ms)')

    for pos in ['right', 'top']:
        ax1.spines[pos].set_visible(False)
        ax2.spines[pos].set_visible(False)

  import matplotlib.pyplot as plt
  from mpl_toolkits.mplot3d import Axes3D

# Calculate distances between categories based on confusion matrix
  distances = 1 - confusion_matrix_percent

# Create 3D scatter plot
  fig = plt.figure()
  ax = fig.add_subplot(111, projection='3d')

  for i in range(num_categories):
    for j in range(i+1, num_categories):
        x = [i, j]
        y = [j, i]
        z = [distances[i,j], distances[j,i]]
        ax.plot(x, y, z,'o')

# Set axis labels and limits
  ax.set_xlabel('Category')
  ax.set_ylabel('Category')
  ax.set_zlabel('Distance')
  ax.set_xlim3d(-0.5, num_categories - 0.5)
  ax.set_ylim3d(-0.5, num_categories - 0.5)
  ax.set_zlim3d(0, 1)

# Set tick labels
  ax.set_xticks(range(num_categories))
  ax.set_yticks(range(num_categories))
  ax.set_xticklabels(category_names)
  ax.set_yticklabels(category_names)

# Rotate the plot
  ax.view_init(elev=30, azim=120)

  plt.show()
  return plt