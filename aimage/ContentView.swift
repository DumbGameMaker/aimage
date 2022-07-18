//
//  ContentView.swift
//  aimage
//
//  Created by Base64== on 7/2/22.
//

import SwiftUI


struct ContentView: View {
  @State var downloading: Bool = true
    var body: some View {
      VStack {
      }.onAppear(perform: download_clip)
      VStack {
        HStack {
          Text("Aimage")

        }
        HStack{
        Image(decorative: "Assets/AppIcon")
        Button {
          // TODO: Settings here
        } label: {
          Image(systemName: "Settings")
        }
        }
      }
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
      ContentView()
    }
}
