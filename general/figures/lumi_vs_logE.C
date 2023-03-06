void lumi_vs_logE()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Mar 30 11:52:35 2022) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "",0,45,1024,768);
   gStyle->SetOptStat(0);
   c1->Range(-1.575113,-1.823443,0.8967163,3.02034);
   c1->SetFillColor(10);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLogx();
   c1->SetLogy();
   c1->SetGridx();
   c1->SetGridy();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.17);
   c1->SetRightMargin(0.08);
   c1->SetTopMargin(0.05);
   c1->SetBottomMargin(0.17);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx17[4] = {
   0.0912,
   0.161,
   0.24,
   0.365};
   Double_t Graph0_fy17[4] = {
   400,
   40,
   15,
   2.6};
   TGraph *graph = new TGraph(4,Graph0_fx17,Graph0_fy17);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetLineWidth(5);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph017 = new TH1F("Graph_Graph017","",100,0.07,5);
   Graph_Graph017->SetMinimum(0.1);
   Graph_Graph017->SetMaximum(600);
   Graph_Graph017->SetDirectory(0);
   Graph_Graph017->SetStats(0);
   Graph_Graph017->SetLineWidth(2);
   Graph_Graph017->SetMarkerStyle(20);
   Graph_Graph017->SetMarkerSize(0.7);
   Graph_Graph017->GetXaxis()->SetTitle("Center-of-Mass Energy [TeV]");
   Graph_Graph017->GetXaxis()->SetRange(1,100);
   Graph_Graph017->GetXaxis()->SetNdivisions(506);
   Graph_Graph017->GetXaxis()->SetLabelFont(42);
   Graph_Graph017->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph017->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph017->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph017->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph017->GetXaxis()->SetTitleFont(42);
   Graph_Graph017->GetYaxis()->SetTitle("Luminosity [10^{34} s^{-1} cm^{-2}]");
   Graph_Graph017->GetYaxis()->SetNdivisions(506);
   Graph_Graph017->GetYaxis()->SetLabelFont(42);
   Graph_Graph017->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph017->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph017->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph017->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph017->GetYaxis()->SetTitleFont(42);
   Graph_Graph017->GetZaxis()->SetLabelFont(42);
   Graph_Graph017->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph017->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph017->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph017->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph017->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph017);
   
   graph->Draw("alp");
   
   Double_t Graph1_fx18[4] = {
   0.0912,
   0.16,
   0.24,
   0.36};
   Double_t Graph1_fy18[4] = {
   115,
   16,
   5,
   0.5};
   graph = new TGraph(4,Graph1_fx18,Graph1_fy18);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph118 = new TH1F("Graph_Graph118","Graph",100,0.06432,0.38688);
   Graph_Graph118->SetMinimum(0.45);
   Graph_Graph118->SetMaximum(126.45);
   Graph_Graph118->SetDirectory(0);
   Graph_Graph118->SetStats(0);
   Graph_Graph118->SetLineWidth(2);
   Graph_Graph118->SetMarkerStyle(20);
   Graph_Graph118->SetMarkerSize(0.7);
   Graph_Graph118->GetXaxis()->SetNdivisions(506);
   Graph_Graph118->GetXaxis()->SetLabelFont(42);
   Graph_Graph118->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph118->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph118->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph118->GetXaxis()->SetTitleOffset(1);
   Graph_Graph118->GetXaxis()->SetTitleFont(42);
   Graph_Graph118->GetYaxis()->SetNdivisions(506);
   Graph_Graph118->GetYaxis()->SetLabelFont(42);
   Graph_Graph118->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph118->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph118->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph118->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph118->GetYaxis()->SetTitleFont(42);
   Graph_Graph118->GetZaxis()->SetLabelFont(42);
   Graph_Graph118->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph118->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph118->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph118->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph118->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph118);
   
   graph->Draw("lp");
   
   Double_t Graph2_fx19[4] = {
   0.0912,
   0.16,
   0.24,
   0.36};
   Double_t Graph2_fy19[4] = {
   192,
   26.6,
   8.3,
   0.8};
   graph = new TGraph(4,Graph2_fx19,Graph2_fy19);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(4);
   graph->SetLineStyle(2);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(21);
   
   TH1F *Graph_Graph219 = new TH1F("Graph_Graph219","Graph",100,0.06432,0.38688);
   Graph_Graph219->SetMinimum(0.72);
   Graph_Graph219->SetMaximum(211.12);
   Graph_Graph219->SetDirectory(0);
   Graph_Graph219->SetStats(0);
   Graph_Graph219->SetLineWidth(2);
   Graph_Graph219->SetMarkerStyle(20);
   Graph_Graph219->SetMarkerSize(0.7);
   Graph_Graph219->GetXaxis()->SetNdivisions(506);
   Graph_Graph219->GetXaxis()->SetLabelFont(42);
   Graph_Graph219->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph219->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph219->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph219->GetXaxis()->SetTitleOffset(1);
   Graph_Graph219->GetXaxis()->SetTitleFont(42);
   Graph_Graph219->GetYaxis()->SetNdivisions(506);
   Graph_Graph219->GetYaxis()->SetLabelFont(42);
   Graph_Graph219->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph219->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph219->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph219->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph219->GetYaxis()->SetTitleFont(42);
   Graph_Graph219->GetZaxis()->SetLabelFont(42);
   Graph_Graph219->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph219->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph219->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph219->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph219->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph219);
   
   graph->Draw("lp");
   
   Double_t Graph3_fx20[4] = {
   0.0912,
   0.38,
   1.5,
   3};
   Double_t Graph3_fy20[4] = {
   0.36,
   2.3,
   3.7,
   5.9};
   graph = new TGraph(4,Graph3_fx20,Graph3_fy20);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(8);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(8);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph320 = new TH1F("Graph_Graph320","Graph",100,0.08208,3.29088);
   Graph_Graph320->SetMinimum(0.324);
   Graph_Graph320->SetMaximum(6.454);
   Graph_Graph320->SetDirectory(0);
   Graph_Graph320->SetStats(0);
   Graph_Graph320->SetLineWidth(2);
   Graph_Graph320->SetMarkerStyle(20);
   Graph_Graph320->SetMarkerSize(0.7);
   Graph_Graph320->GetXaxis()->SetNdivisions(506);
   Graph_Graph320->GetXaxis()->SetLabelFont(42);
   Graph_Graph320->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph320->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph320->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph320->GetXaxis()->SetTitleOffset(1);
   Graph_Graph320->GetXaxis()->SetTitleFont(42);
   Graph_Graph320->GetYaxis()->SetNdivisions(506);
   Graph_Graph320->GetYaxis()->SetLabelFont(42);
   Graph_Graph320->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph320->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph320->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph320->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph320->GetYaxis()->SetTitleFont(42);
   Graph_Graph320->GetZaxis()->SetLabelFont(42);
   Graph_Graph320->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph320->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph320->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph320->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph320->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph320);
   
   graph->Draw("lp");
   
   Double_t Graph4_fx21[4] = {
   0.0912,
   0.38,
   1.5,
   3};
   Double_t Graph4_fy21[4] = {
   0.36,
   4.6,
   3.7,
   5.9};
   graph = new TGraph(4,Graph4_fx21,Graph4_fy21);
   graph->SetName("Graph4");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(8);
   graph->SetLineStyle(2);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(8);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph421 = new TH1F("Graph_Graph421","Graph",100,0.08208,3.29088);
   Graph_Graph421->SetMinimum(0.324);
   Graph_Graph421->SetMaximum(6.454);
   Graph_Graph421->SetDirectory(0);
   Graph_Graph421->SetStats(0);
   Graph_Graph421->SetLineWidth(2);
   Graph_Graph421->SetMarkerStyle(20);
   Graph_Graph421->SetMarkerSize(0.7);
   Graph_Graph421->GetXaxis()->SetNdivisions(506);
   Graph_Graph421->GetXaxis()->SetLabelFont(42);
   Graph_Graph421->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph421->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph421->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph421->GetXaxis()->SetTitleOffset(1);
   Graph_Graph421->GetXaxis()->SetTitleFont(42);
   Graph_Graph421->GetYaxis()->SetNdivisions(506);
   Graph_Graph421->GetYaxis()->SetLabelFont(42);
   Graph_Graph421->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph421->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph421->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph421->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph421->GetYaxis()->SetTitleFont(42);
   Graph_Graph421->GetZaxis()->SetLabelFont(42);
   Graph_Graph421->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph421->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph421->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph421->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph421->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph421);
   
   graph->Draw("lp");
   
   Double_t Graph5_fx22[4] = {
   0.0912,
   0.25,
   0.5,
   1};
   Double_t Graph5_fy22[4] = {
   0.21,
   1.35,
   1.8,
   3.6};
   graph = new TGraph(4,Graph5_fx22,Graph5_fy22);
   graph->SetName("Graph5");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(22);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph522 = new TH1F("Graph_Graph522","Graph",100,0.00032,1.09088);
   Graph_Graph522->SetMinimum(0.189);
   Graph_Graph522->SetMaximum(3.939);
   Graph_Graph522->SetDirectory(0);
   Graph_Graph522->SetStats(0);
   Graph_Graph522->SetLineWidth(2);
   Graph_Graph522->SetMarkerStyle(20);
   Graph_Graph522->SetMarkerSize(0.7);
   Graph_Graph522->GetXaxis()->SetNdivisions(506);
   Graph_Graph522->GetXaxis()->SetLabelFont(42);
   Graph_Graph522->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph522->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph522->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph522->GetXaxis()->SetTitleOffset(1);
   Graph_Graph522->GetXaxis()->SetTitleFont(42);
   Graph_Graph522->GetYaxis()->SetNdivisions(506);
   Graph_Graph522->GetYaxis()->SetLabelFont(42);
   Graph_Graph522->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph522->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph522->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph522->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph522->GetYaxis()->SetTitleFont(42);
   Graph_Graph522->GetZaxis()->SetLabelFont(42);
   Graph_Graph522->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph522->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph522->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph522->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph522->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph522);
   
   graph->Draw("lp");
   
   Double_t Graph6_fx23[4] = {
   0.0912,
   0.25,
   0.5,
   1};
   Double_t Graph6_fy23[4] = {
   0.41,
   2.7,
   3.6,
   5.1};
   graph = new TGraph(4,Graph6_fx23,Graph6_fy23);
   graph->SetName("Graph6");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineStyle(2);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(22);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph623 = new TH1F("Graph_Graph623","Graph",100,0.00032,1.09088);
   Graph_Graph623->SetMinimum(0.369);
   Graph_Graph623->SetMaximum(5.569);
   Graph_Graph623->SetDirectory(0);
   Graph_Graph623->SetStats(0);
   Graph_Graph623->SetLineWidth(2);
   Graph_Graph623->SetMarkerStyle(20);
   Graph_Graph623->SetMarkerSize(0.7);
   Graph_Graph623->GetXaxis()->SetNdivisions(506);
   Graph_Graph623->GetXaxis()->SetLabelFont(42);
   Graph_Graph623->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph623->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph623->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph623->GetXaxis()->SetTitleOffset(1);
   Graph_Graph623->GetXaxis()->SetTitleFont(42);
   Graph_Graph623->GetYaxis()->SetNdivisions(506);
   Graph_Graph623->GetYaxis()->SetLabelFont(42);
   Graph_Graph623->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph623->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph623->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph623->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph623->GetYaxis()->SetTitleFont(42);
   Graph_Graph623->GetZaxis()->SetLabelFont(42);
   Graph_Graph623->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph623->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph623->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph623->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph623->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph623);
   
   graph->Draw("lp");
   
   Double_t Graph7_fx24[4] = {
   0.0912,
   0.25,
   0.5,
   1};
   Double_t Graph7_fy24[4] = {
   0.41,
   5.4,
   3.6,
   5.1};
   graph = new TGraph(4,Graph7_fx24,Graph7_fy24);
   graph->SetName("Graph7");
   graph->SetTitle("Graph");
   graph->SetFillStyle(1000);
   graph->SetLineColor(2);
   graph->SetLineStyle(3);
   graph->SetLineWidth(5);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(22);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph724 = new TH1F("Graph_Graph724","Graph",100,0.00032,1.09088);
   Graph_Graph724->SetMinimum(0.369);
   Graph_Graph724->SetMaximum(5.899);
   Graph_Graph724->SetDirectory(0);
   Graph_Graph724->SetStats(0);
   Graph_Graph724->SetLineWidth(2);
   Graph_Graph724->SetMarkerStyle(20);
   Graph_Graph724->SetMarkerSize(0.7);
   Graph_Graph724->GetXaxis()->SetNdivisions(506);
   Graph_Graph724->GetXaxis()->SetLabelFont(42);
   Graph_Graph724->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph724->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph724->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph724->GetXaxis()->SetTitleOffset(1);
   Graph_Graph724->GetXaxis()->SetTitleFont(42);
   Graph_Graph724->GetYaxis()->SetNdivisions(506);
   Graph_Graph724->GetYaxis()->SetLabelFont(42);
   Graph_Graph724->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph724->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph724->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph724->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph724->GetYaxis()->SetTitleFont(42);
   Graph_Graph724->GetZaxis()->SetLabelFont(42);
   Graph_Graph724->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph724->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph724->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph724->GetZaxis()->SetTitleOffset(1.1);
   Graph_Graph724->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph724);
   
   graph->Draw("lp");
   
   TLegend *leg = new TLegend(0.45,0.6,0.85,0.892,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.025);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Luminosity vs Energy of Future e^{+}e^{-} Colliders","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph0","FCCee, 2 IPs [arXiv:2203.08310] ","LP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph1","CEPC, 2 IPs [arXiv:2203.09451]","LP");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph2","CEPC, 2 IPs, lumi up, power priv. com.]","LP");
   entry->SetLineColor(4);
   entry->SetLineStyle(2);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph5","ILC baseline [arXiv:2203.07622]","LP");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph6","ILC luminosity upgrade [dito]","LP");
   entry->SetLineColor(2);
   entry->SetLineStyle(2);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph7","ILC250 10 Hz operation [dito]","LP");
   entry->SetLineColor(2);
   entry->SetLineStyle(3);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph3","CLIC baseline [arXiv:2203.09186]","LP");
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph4","CLIC luminosity upgrade [dito]","LP");
   entry->SetLineColor(8);
   entry->SetLineStyle(2);
   entry->SetLineWidth(5);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
