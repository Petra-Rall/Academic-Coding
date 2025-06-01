from graphviz import Digraph

# Create a flowchart for the distraction prevention system session logic
flowchart = Digraph(format='png')
flowchart.attr(rankdir='TB', size='8,10')
flowchart.attr('node', shape='box')

# Nodes
flowchart.node('A', 'Press Push Button to Start Session')
flowchart.node('B', 'Initialize Timer (e.g., 25 mins)\nStart Logging to SD Card')
flowchart.node('C', 'Display Countdown on OLED')
flowchart.node('D', 'Monitor Sensors:\n- FSR: Seated?\n- LDR: Phone light?\n- Vibration: Phone buzz?')
flowchart.node('E', 'Distraction Detected?\n(Any sensor triggered)')
flowchart.node('F', 'Buzzer Alarm On\nTimer Stop\nLog Event')
flowchart.node('J', 'Distraction Removed?')
flowchart.node('K', 'Timer Start')

flowchart.node('G', 'Session Time Over?')
flowchart.node('H', 'End Session\nLog Session Stats to SD')
flowchart.node('I', 'Display Summary on OLED\nWait for Next Start')

# Edges
flowchart.edge('A', 'B')
flowchart.edge('B', 'C')
flowchart.edge('C', 'D')
flowchart.edge('D', 'E')
flowchart.edge('E', 'F', label='Yes')
flowchart.edge('F', 'J')
flowchart.edge('J', 'K', label='Yes')
flowchart.edge('J', 'F', label='No')
flowchart.edge('K', 'G', style='dashed')

flowchart.edge('E', 'G', label='No', constraint='false')
flowchart.edge('F', 'G', style='dashed')
flowchart.edge('G', 'H', label='Yes')
flowchart.edge('G', 'D', label='No', style='dashed')
flowchart.edge('H', 'I')

# Render the diagram
flowchart_path = "Smart_Distraction_Flowchart"
flowchart.render(flowchart_path, cleanup=False)
flowchart_path + ".png"