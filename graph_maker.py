import matplotlib.pyplot as plt
import pandas as pd
import networkx as nx
import numpy as np
import pydot
import plotly.graph_objects as go

# Read in the data in quantum_graph_data.xlsx as a DataFrame
df = pd.read_excel('quantum_graph_data.xlsx')

# Create an empty graph
G = nx.Graph()

# Iterate through each row in the DataFrame
for idx, row in df.iterrows():
    source = row['VERTEX']
    targets = row[['TARGET1', 'TARGET2', 'TARGET3', 'TARGET4']].tolist()
    location = row['LOCATION']

    #Add node
    G.add_node(source, location=location)

    # Add edges between the source and target nodes (excluding 'None' and self-loops)
    for target in targets:
        if target != source and target != 0:
            G.add_edge(source, target)

# Use circluar layout for positioning nodes
pos = nx.circular_layout(G)

# Create edge trace
edge_x = []
edge_y = []
for edge in G.edges():
    x0, y0 = pos[edge[0]]
    x1, y1 = pos[edge[1]]
    edge_x.extend([x0, x1, None])
    edge_y.extend([y0, y1, None])

edge_trace = go.Scatter(
    x=edge_x, y=edge_y,
    line=dict(width=1.5, color='#B0C4DE'),  # Adjust edge width and color
    hoverinfo='none',
    mode='lines')

# Create node trace
node_x = []
node_y = []
node_names = []
node_locations = []

for node in G.nodes():
    x, y = pos[node]
    node_x.append(x)
    node_y.append(y)
    node_names.append(str(node))
    node_locations.append(G.nodes[node]['location'])  # Access 'location' attribute of nodes
    
node_trace = go.Scatter(
    x=node_x, y=node_y,
    mode='markers+text',
    hoverinfo='text',
        text=[f'Node: {node}<br>Location: {loc}' for node, loc in zip(node_names, node_locations)],  # Set node names and locations as text
    textposition='bottom center',  
    marker=dict(
        color='skyblue',  # Node color
        size=30,  # Node size
        line_width=2))

# Create the figure
fig = go.Figure(data=[edge_trace, node_trace],
                layout=go.Layout(
                    title='qGraph',
                    titlefont_size=20,
                    showlegend=False,
                    hovermode='closest',
                    margin=dict(b=20, l=5, r=5, t=40),
                    xaxis=dict(showgrid=False, zeroline=False, showticklabels=False),
                    yaxis=dict(showgrid=False, zeroline=False, showticklabels=False)
                ))

fig.update_layout(
    plot_bgcolor='white',  # Background color
    paper_bgcolor='white'  # Paper (border) color
)

fig.show()